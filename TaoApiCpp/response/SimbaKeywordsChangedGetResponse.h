#ifndef SIMBAKEYWORDSCHANGEDGETRESPONSE_H
#define SIMBAKEYWORDSCHANGEDGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/KeywordPage.h>


/**
 * @brief TOP RESPONSE API: 分页获取修改过的关键词ID和修改时间
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaKeywordsChangedGetResponse : public TaoResponse
{
public:
 virtual ~SimbaKeywordsChangedGetResponse() { }

  KeywordPage getKeywords() const;
  void setKeywords (KeywordPage keywords);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 关键词分页对象
 **/
  KeywordPage keywords;

};

#endif
