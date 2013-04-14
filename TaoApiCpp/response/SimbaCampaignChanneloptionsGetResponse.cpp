#include <TaoApiCpp/response/SimbaCampaignChanneloptionsGetResponse.h>

QList<ChannelOption> SimbaCampaignChanneloptionsGetResponse::getChannelOptions() const {
  return channelOptions;
}
void SimbaCampaignChanneloptionsGetResponse::setChannelOptions (QList<ChannelOption> channelOptions) {
  this->channelOptions = channelOptions;
}

void SimbaCampaignChanneloptionsGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("channel_options")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("channel_options");
  Parser *parser;
  foreach (parser, listParser) {
    ChannelOption tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    channelOptions.append(tmp);
  }
  }

}

