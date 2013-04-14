#include <TaoApiCpp/domain/SpmResult.h>
QString SpmResult::getAppKey() const {
  return appKey;
}
void SpmResult::setAppKey (QString appKey) {
  this->appKey = appKey;
}

QDateTime SpmResult::getDate() const {
  return date;
}
void SpmResult::setDate (QDateTime date) {
  this->date = date;
}

QList<TopSpm> SpmResult::getSpmModules() const {
  return spmModules;
}
void SpmResult::setSpmModules (QList<TopSpm> spmModules) {
  this->spmModules = spmModules;
}

QList<TopSpm> SpmResult::getSpmPages() const {
  return spmPages;
}
void SpmResult::setSpmPages (QList<TopSpm> spmPages) {
  this->spmPages = spmPages;
}

TopSpm SpmResult::getSpmSite() const {
  return spmSite;
}
void SpmResult::setSpmSite (TopSpm spmSite) {
  this->spmSite = spmSite;
}


void SpmResult::parseResponse() {
  if (responseParser->hasName("app_key")) {
  appKey = responseParser->getStrByName("app_key");
  }
  if (responseParser->hasName("date")) {
  date = responseParser->getDateByName("date");
  }
  if (responseParser->hasName("spm_modules")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("spm_modules");
  Parser *parser;
  foreach (parser, listParser) {
    TopSpm tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    spmModules.append(tmp);
  }
  }
  if (responseParser->hasName("spm_pages")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("spm_pages");
  Parser *parser;
  foreach (parser, listParser) {
    TopSpm tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    spmPages.append(tmp);
  }
  }
  if (responseParser->hasName("spm_site")) {
  spmSite.setParser(responseParser->getObjectParser("spm_site"));
  spmSite.parseResponse();
  }

}

