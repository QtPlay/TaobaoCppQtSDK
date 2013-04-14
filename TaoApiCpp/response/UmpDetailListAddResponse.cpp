#include <TaoApiCpp/response/UmpDetailListAddResponse.h>

QList<qlonglong> UmpDetailListAddResponse::getDetailIdList() const {
  return detailIdList;
}
void UmpDetailListAddResponse::setDetailIdList (QList<qlonglong> detailIdList) {
  this->detailIdList = detailIdList;
}

void UmpDetailListAddResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("detail_id_list")) {
  detailIdList = responseParser->getListNumByName("detail_id_list");
  }

}

