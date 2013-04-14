#include <TaoApiCpp/domain/AtOrder.h>
BaseInfo AtOrder::getBaseInfo() const {
  return baseInfo;
}
void AtOrder::setBaseInfo (BaseInfo baseInfo) {
  this->baseInfo = baseInfo;
}

CorpInfo AtOrder::getCorpInfo() const {
  return corpInfo;
}
void AtOrder::setCorpInfo (CorpInfo corpInfo) {
  this->corpInfo = corpInfo;
}

QString AtOrder::getExtra() const {
  return extra;
}
void AtOrder::setExtra (QString extra) {
  this->extra = extra;
}

Itinerary AtOrder::getItinerary() const {
  return itinerary;
}
void AtOrder::setItinerary (Itinerary itinerary) {
  this->itinerary = itinerary;
}

QList<SegmentInfo> AtOrder::getSegmentInfos() const {
  return segmentInfos;
}
void AtOrder::setSegmentInfos (QList<SegmentInfo> segmentInfos) {
  this->segmentInfos = segmentInfos;
}


void AtOrder::parseResponse() {
  if (responseParser->hasName("base_info")) {
  baseInfo.setParser(responseParser->getObjectParser("base_info"));
  baseInfo.parseResponse();
  }
  if (responseParser->hasName("corp_info")) {
  corpInfo.setParser(responseParser->getObjectParser("corp_info"));
  corpInfo.parseResponse();
  }
  if (responseParser->hasName("extra")) {
  extra = responseParser->getStrByName("extra");
  }
  if (responseParser->hasName("itinerary")) {
  itinerary.setParser(responseParser->getObjectParser("itinerary"));
  itinerary.parseResponse();
  }
  if (responseParser->hasName("segment_infos")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("segment_infos");
  Parser *parser;
  foreach (parser, listParser) {
    SegmentInfo tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    segmentInfos.append(tmp);
  }
  }

}

