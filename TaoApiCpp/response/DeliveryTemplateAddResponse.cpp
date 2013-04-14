#include <TaoApiCpp/response/DeliveryTemplateAddResponse.h>

DeliveryTemplate DeliveryTemplateAddResponse::getDeliveryTemplate() const {
  return deliveryTemplate;
}
void DeliveryTemplateAddResponse::setDeliveryTemplate (DeliveryTemplate deliveryTemplate) {
  this->deliveryTemplate = deliveryTemplate;
}

void DeliveryTemplateAddResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("delivery_template")) {
  deliveryTemplate.setParser(responseParser->getObjectParser("delivery_template"));
  deliveryTemplate.parseResponse();
  }

}

