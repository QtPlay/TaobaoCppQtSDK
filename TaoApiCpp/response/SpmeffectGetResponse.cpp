#include <TaoApiCpp/response/SpmeffectGetResponse.h>

SpmResult SpmeffectGetResponse::getSpmResult() const {
  return spmResult;
}
void SpmeffectGetResponse::setSpmResult (SpmResult spmResult) {
  this->spmResult = spmResult;
}

void SpmeffectGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("spm_result")) {
  spmResult.setParser(responseParser->getObjectParser("spm_result"));
  spmResult.parseResponse();
  }

}

