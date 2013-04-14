#include <TaoApiCpp/response/UserBuyerGetResponse.h>

User UserBuyerGetResponse::getUser() const {
  return user;
}
void UserBuyerGetResponse::setUser (User user) {
  this->user = user;
}

void UserBuyerGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("user")) {
  user.setParser(responseParser->getObjectParser("user"));
  user.parseResponse();
  }

}

