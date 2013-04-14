#include <TaoApiCpp/response/SubuserFullinfoGetResponse.h>

SubUserFullInfo SubuserFullinfoGetResponse::getSubFullinfo() const {
  return subFullinfo;
}
void SubuserFullinfoGetResponse::setSubFullinfo (SubUserFullInfo subFullinfo) {
  this->subFullinfo = subFullinfo;
}

void SubuserFullinfoGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("sub_fullinfo")) {
  subFullinfo.setParser(responseParser->getObjectParser("sub_fullinfo"));
  subFullinfo.parseResponse();
  }

}

