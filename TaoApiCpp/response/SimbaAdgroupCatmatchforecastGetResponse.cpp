#include <TaoApiCpp/response/SimbaAdgroupCatmatchforecastGetResponse.h>

ADGroupCatMatchForecast SimbaAdgroupCatmatchforecastGetResponse::getAdgroupCatmatchForecast() const {
  return adgroupCatmatchForecast;
}
void SimbaAdgroupCatmatchforecastGetResponse::setAdgroupCatmatchForecast (ADGroupCatMatchForecast adgroupCatmatchForecast) {
  this->adgroupCatmatchForecast = adgroupCatmatchForecast;
}

void SimbaAdgroupCatmatchforecastGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("adgroup_catmatch_forecast")) {
  adgroupCatmatchForecast.setParser(responseParser->getObjectParser("adgroup_catmatch_forecast"));
  adgroupCatmatchForecast.parseResponse();
  }

}

