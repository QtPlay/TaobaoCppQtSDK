#include <TaoApiCpp/response/TravelItemsareaGetResponse.h>

QList<TravelItemsAreaNode> TravelItemsareaGetResponse::getTravelItemsAreaNodes() const {
  return travelItemsAreaNodes;
}
void TravelItemsareaGetResponse::setTravelItemsAreaNodes (QList<TravelItemsAreaNode> travelItemsAreaNodes) {
  this->travelItemsAreaNodes = travelItemsAreaNodes;
}

void TravelItemsareaGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("travel_items_area_nodes")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("travel_items_area_nodes");
  Parser *parser;
  foreach (parser, listParser) {
    TravelItemsAreaNode tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    travelItemsAreaNodes.append(tmp);
  }
  }

}

