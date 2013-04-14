#include <TaoApiCpp/domain/ItemTemplate.h>
qlonglong ItemTemplate::getShopType() const {
  return shopType;
}
void ItemTemplate::setShopType (qlonglong shopType) {
  this->shopType = shopType;
}

qlonglong ItemTemplate::getTemplateId() const {
  return templateId;
}
void ItemTemplate::setTemplateId (qlonglong templateId) {
  this->templateId = templateId;
}

QString ItemTemplate::getTemplateName() const {
  return templateName;
}
void ItemTemplate::setTemplateName (QString templateName) {
  this->templateName = templateName;
}


void ItemTemplate::parseResponse() {
  if (responseParser->hasName("shop_type")) {
  shopType = responseParser->getNumByName("shop_type");
  }
  if (responseParser->hasName("template_id")) {
  templateId = responseParser->getNumByName("template_id");
  }
  if (responseParser->hasName("template_name")) {
  templateName = responseParser->getStrByName("template_name");
  }

}

