#include <TaoApiCpp/response/DeliveryTemplateGetResponse.h>

QList<DeliveryTemplate> DeliveryTemplateGetResponse::getDeliveryTemplates() const {
  return deliveryTemplates;
}
void DeliveryTemplateGetResponse::setDeliveryTemplates (QList<DeliveryTemplate> deliveryTemplates) {
  this->deliveryTemplates = deliveryTemplates;
}
qlonglong DeliveryTemplateGetResponse::getTotalResults() const {
  return totalResults;
}
void DeliveryTemplateGetResponse::setTotalResults (qlonglong totalResults) {
  this->totalResults = totalResults;
}

void DeliveryTemplateGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("delivery_templates")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("delivery_templates");
  Parser *parser;
  foreach (parser, listParser) {
    DeliveryTemplate tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    deliveryTemplates.append(tmp);
  }
  }
  if (responseParser->hasName("total_results")) {
  totalResults = responseParser->getNumByName("total_results");
  }

}

