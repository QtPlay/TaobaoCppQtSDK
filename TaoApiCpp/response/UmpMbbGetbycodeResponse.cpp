#include <TaoApiCpp/response/UmpMbbGetbycodeResponse.h>

QString UmpMbbGetbycodeResponse::getMbb() const {
  return mbb;
}
void UmpMbbGetbycodeResponse::setMbb (QString mbb) {
  this->mbb = mbb;
}

void UmpMbbGetbycodeResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("mbb")) {
  mbb = responseParser->getStrByName("mbb");
  }

}

