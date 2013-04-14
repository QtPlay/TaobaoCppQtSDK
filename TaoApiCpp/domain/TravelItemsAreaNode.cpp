#include <TaoApiCpp/domain/TravelItemsAreaNode.h>
QList<TravelItemsPropValue> TravelItemsAreaNode::getSubPropValues() const {
  return subPropValues;
}
void TravelItemsAreaNode::setSubPropValues (QList<TravelItemsPropValue> subPropValues) {
  this->subPropValues = subPropValues;
}

TravelItemsPropValue TravelItemsAreaNode::getTravelItemsPropValue() const {
  return travelItemsPropValue;
}
void TravelItemsAreaNode::setTravelItemsPropValue (TravelItemsPropValue travelItemsPropValue) {
  this->travelItemsPropValue = travelItemsPropValue;
}


void TravelItemsAreaNode::parseResponse() {
  if (responseParser->hasName("sub_prop_values")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("sub_prop_values");
  Parser *parser;
  foreach (parser, listParser) {
    TravelItemsPropValue tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    subPropValues.append(tmp);
  }
  }
  if (responseParser->hasName("travel_items_prop_value")) {
  travelItemsPropValue.setParser(responseParser->getObjectParser("travel_items_prop_value"));
  travelItemsPropValue.parseResponse();
  }

}

