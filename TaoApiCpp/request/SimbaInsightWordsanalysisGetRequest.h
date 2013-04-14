#ifndef SIMBAINSIGHTWORDSANALYSISGETREQUEST_H
#define SIMBAINSIGHTWORDSANALYSISGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaInsightWordsanalysisGetResponse.h>

/**
 * TOP API: 词分析数据查询
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaInsightWordsanalysisGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getNick() const
;  void setNick (QString nick);

 QString getStu() const
;  void setStu (QString stu);

 QString getWords() const
;  void setWords (QString words);


  virtual SimbaInsightWordsanalysisGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 主人昵称
 **/
  QString nick;

/**
 * @brief 结果过滤。 
AREA：  返回地域占比； 
SOURCE：返回来源占比； 
HPRICE：返回竞价分布。 
stu只能是AREA、SOURCE或HPRICE中的一个
 **/
  QString stu;

/**
 * @brief 查询词组，最大长度200
 **/
  QString words;

};

#endif  /* SIMBAINSIGHTWORDSANALYSISGETREQUEST_H */
