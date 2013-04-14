#include <TaoApiCpp/response/FenxiaoLoginUserGetResponse.h>

LoginUser FenxiaoLoginUserGetResponse::getLoginUser() const {
  return loginUser;
}
void FenxiaoLoginUserGetResponse::setLoginUser (LoginUser loginUser) {
  this->loginUser = loginUser;
}

void FenxiaoLoginUserGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("login_user")) {
  loginUser.setParser(responseParser->getObjectParser("login_user"));
  loginUser.parseResponse();
  }

}

