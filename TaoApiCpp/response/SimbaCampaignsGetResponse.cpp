#include <TaoApiCpp/response/SimbaCampaignsGetResponse.h>

QList<Campaign> SimbaCampaignsGetResponse::getCampaigns() const {
  return campaigns;
}
void SimbaCampaignsGetResponse::setCampaigns (QList<Campaign> campaigns) {
  this->campaigns = campaigns;
}

void SimbaCampaignsGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("campaigns")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("campaigns");
  Parser *parser;
  foreach (parser, listParser) {
    Campaign tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    campaigns.append(tmp);
  }
  }

}

