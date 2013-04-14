#include <TaoApiCpp/response/SimbaNonsearchDemographicsUpdateResponse.h>

QList<DemographicSetting> SimbaNonsearchDemographicsUpdateResponse::getDemographicSettingList() const {
  return demographicSettingList;
}
void SimbaNonsearchDemographicsUpdateResponse::setDemographicSettingList (QList<DemographicSetting> demographicSettingList) {
  this->demographicSettingList = demographicSettingList;
}

void SimbaNonsearchDemographicsUpdateResponse::parseNormalResponse() {
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

