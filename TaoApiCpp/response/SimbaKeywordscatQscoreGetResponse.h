#ifndef SIMBAKEYWORDSCATQSCOREGETRESPONSE_H
#define SIMBAKEYWORDSCATQSCOREGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Qscore.h>


/**
 * @brief TOP RESPONSE API: 取得一个推广组的所有关键词和类目出价的质量得分列表
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaKeywordscatQscoreGetResponse : public TaoResponse
{
public:
 virtual ~SimbaKeywordscatQscoreGetResponse() { }

  Qscore getQscore() const;
  void setQscore (Qscore qscore);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 类目出价和词的质量得分对象
 **/
  Qscore qscore;

};

#endif
