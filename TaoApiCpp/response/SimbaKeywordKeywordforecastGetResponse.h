#ifndef SIMBAKEYWORDKEYWORDFORECASTGETRESPONSE_H
#define SIMBAKEYWORDKEYWORDFORECASTGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/KeywordForecast.h>


/**
 * @brief TOP RESPONSE API: 根据词ID和给定的出价获取词的预估信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaKeywordKeywordforecastGetResponse : public TaoResponse
{
public:
 virtual ~SimbaKeywordKeywordforecastGetResponse() { }

  KeywordForecast getKeywordForecast() const;
  void setKeywordForecast (KeywordForecast keywordForecast);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 词预估结果信息 
 
预测数据皆为估算结果，以实际发生为准
 **/
  KeywordForecast keywordForecast;

};

#endif
