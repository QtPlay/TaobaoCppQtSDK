#include <TaoApiCpp/response/UmpDetailAddResponse.h>

qlonglong UmpDetailAddResponse::getDetailId() const {
  return detailId;
}
void UmpDetailAddResponse::setDetailId (qlonglong detailId) {
  this->detailId = detailId;
}

void UmpDetailAddResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("detail_id")) {
  detailId = responseParser->getNumByName("detail_id");
  }

}

