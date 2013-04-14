#include <TaoApiCpp/response/SimbaCampaignAreaoptionsGetResponse.h>

QList<AreaOption> SimbaCampaignAreaoptionsGetResponse::getAreaOptions() const {
  return areaOptions;
}
void SimbaCampaignAreaoptionsGetResponse::setAreaOptions (QList<AreaOption> areaOptions) {
  this->areaOptions = areaOptions;
}

void SimbaCampaignAreaoptionsGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("area_options")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("area_options");
  Parser *parser;
  foreach (parser, listParser) {
    AreaOption tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    areaOptions.append(tmp);
  }
  }

}

