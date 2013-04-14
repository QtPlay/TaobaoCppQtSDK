#include <TaoApiCpp/domain/ChannelOption.h>
qlonglong ChannelOption::getChannelId() const {
  return channelId;
}
void ChannelOption::setChannelId (qlonglong channelId) {
  this->channelId = channelId;
}

bool ChannelOption::getIsNonsearch() const {
  return isNonsearch;
}
void ChannelOption::setIsNonsearch (bool isNonsearch) {
  this->isNonsearch = isNonsearch;
}

bool ChannelOption::getIsSearch() const {
  return isSearch;
}
void ChannelOption::setIsSearch (bool isSearch) {
  this->isSearch = isSearch;
}

QString ChannelOption::getName() const {
  return name;
}
void ChannelOption::setName (QString name) {
  this->name = name;
}

QString ChannelOption::getTrafficName() const {
  return trafficName;
}
void ChannelOption::setTrafficName (QString trafficName) {
  this->trafficName = trafficName;
}

QString ChannelOption::getTrafficType() const {
  return trafficType;
}
void ChannelOption::setTrafficType (QString trafficType) {
  this->trafficType = trafficType;
}


void ChannelOption::parseResponse() {
  if (responseParser->hasName("channel_id")) {
  channelId = responseParser->getNumByName("channel_id");
  }
  if (responseParser->hasName("is_nonsearch")) {
  isNonsearch = responseParser->getBoolByName("is_nonsearch");
  }
  if (responseParser->hasName("is_search")) {
  isSearch = responseParser->getBoolByName("is_search");
  }
  if (responseParser->hasName("name")) {
  name = responseParser->getStrByName("name");
  }
  if (responseParser->hasName("traffic_name")) {
  trafficName = responseParser->getStrByName("traffic_name");
  }
  if (responseParser->hasName("traffic_type")) {
  trafficType = responseParser->getStrByName("traffic_type");
  }

}

