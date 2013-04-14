#include <TaoApiCpp/response/FenxiaoOrderCreateDealerResponse.h>

qlonglong FenxiaoOrderCreateDealerResponse::getGetModule() const {
  return getModule;
}
void FenxiaoOrderCreateDealerResponse::setGetModule (qlonglong getModule) {
  this->getModule = getModule;
}

void FenxiaoOrderCreateDealerResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("get_module")) {
  getModule = responseParser->getNumByName("get_module");
  }

}

