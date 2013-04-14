#include <TaoApiCpp/response/DeliveryTemplatesGetResponse.h>

QList<DeliveryTemplate> DeliveryTemplatesGetResponse::getDeliveryTemplates() const {
  return deliveryTemplates;
}
void DeliveryTemplatesGetResponse::setDeliveryTemplates (QList<DeliveryTemplate> deliveryTemplates) {
  this->deliveryTemplates = deliveryTemplates;
}
qlonglong DeliveryTemplatesGetResponse::getTotalResults() const {
  return totalResults;
}
void DeliveryTemplatesGetResponse::setTotalResults (qlonglong totalResults) {
  this->totalResults = totalResults;
}

void DeliveryTemplatesGetResponse::parseNormalResponse() {
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

