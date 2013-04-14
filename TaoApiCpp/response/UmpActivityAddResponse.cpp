#include <TaoApiCpp/response/UmpActivityAddResponse.h>

qlonglong UmpActivityAddResponse::getActId() const {
  return actId;
}
void UmpActivityAddResponse::setActId (qlonglong actId) {
  this->actId = actId;
}

void UmpActivityAddResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("act_id")) {
  actId = responseParser->getNumByName("act_id");
  }

}

