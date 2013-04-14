#include <TaoApiCpp/response/UsersGetResponse.h>

QList<User> UsersGetResponse::getUsers() const {
  return users;
}
void UsersGetResponse::setUsers (QList<User> users) {
  this->users = users;
}

void UsersGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("users")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("users");
  Parser *parser;
  foreach (parser, listParser) {
    User tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    users.append(tmp);
  }
  }

}

