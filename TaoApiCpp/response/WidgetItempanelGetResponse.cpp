#include <TaoApiCpp/response/WidgetItempanelGetResponse.h>

QString WidgetItempanelGetResponse::getAddUrl() const {
  return addUrl;
}
void WidgetItempanelGetResponse::setAddUrl (QString addUrl) {
  this->addUrl = addUrl;
}
WidgetItem WidgetItempanelGetResponse::getItem() const {
  return item;
}
void WidgetItempanelGetResponse::setItem (WidgetItem item) {
  this->item = item;
}

void WidgetItempanelGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("add_url")) {
  addUrl = responseParser->getStrByName("add_url");
  }
  if (responseParser->hasName("item")) {
  item.setParser(responseParser->getObjectParser("item"));
  item.parseResponse();
  }

}

