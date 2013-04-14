#include <TaoApiCpp/response/UserSellerGetResponse.h>

User UserSellerGetResponse::getUser() const {
  return user;
}
void UserSellerGetResponse::setUser (User user) {
  this->user = user;
}

void UserSellerGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("user")) {
  user.setParser(responseParser->getObjectParser("user"));
  user.parseResponse();
  }

}

