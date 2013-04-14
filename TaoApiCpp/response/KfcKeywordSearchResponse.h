#ifndef KFCKEYWORDSEARCHRESPONSE_H
#define KFCKEYWORDSEARCHRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/KfcSearchResult.h>


/**
 * @brief TOP RESPONSE API: 对输入的文本信息进行禁忌关键词匹配，返回匹配的结果
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class KfcKeywordSearchResponse : public TaoResponse
{
public:
 virtual ~KfcKeywordSearchResponse() { }

  KfcSearchResult getKfcSearchResult() const;
  void setKfcSearchResult (KfcSearchResult kfcSearchResult);
  virtual void parseNormalResponse();

 private:
/**
 * @brief KFC关键词匹配返回的结果信息
 **/
  KfcSearchResult kfcSearchResult;

};

#endif
