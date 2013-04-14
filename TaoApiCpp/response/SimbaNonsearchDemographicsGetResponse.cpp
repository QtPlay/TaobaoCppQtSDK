#include <TaoApiCpp/response/SimbaNonsearchDemographicsGetResponse.h>

QList<DemographicSetting> SimbaNonsearchDemographicsGetResponse::getDemographicSettingList() const {
  return demographicSettingList;
}
void SimbaNonsearchDemographicsGetResponse::setDemographicSettingList (QList<DemographicSetting> demographicSettingList) {
  this->demographicSettingList = demographicSettingList;
}

void SimbaNonsearchDemographicsGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("demographic_setting_list")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("demographic_setting_list");
  Parser *parser;
  foreach (parser, listParser) {
    DemographicSetting tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    demographicSettingList.append(tmp);
  }
  }

}

