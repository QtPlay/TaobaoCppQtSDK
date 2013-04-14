#include <TaoApiCpp/response/SimbaAdgroupOnlineitemsvonGetResponse.h>

SubwayItemPartition SimbaAdgroupOnlineitemsvonGetResponse::getPageItem() const {
  return pageItem;
}
void SimbaAdgroupOnlineitemsvonGetResponse::setPageItem (SubwayItemPartition pageItem) {
  this->pageItem = pageItem;
}

void SimbaAdgroupOnlineitemsvonGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("page_item")) {
  pageItem.setParser(responseParser->getObjectParser("page_item"));
  pageItem.parseResponse();
  }

}

