#include <TaoApiCpp/response/PictureUserinfoGetResponse.h>

UserInfo PictureUserinfoGetResponse::getUserInfo() const {
  return userInfo;
}
void PictureUserinfoGetResponse::setUserInfo (UserInfo userInfo) {
  this->userInfo = userInfo;
}

void PictureUserinfoGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("user_info")) {
  userInfo.setParser(responseParser->getObjectParser("user_info"));
  userInfo.parseResponse();
  }

}

