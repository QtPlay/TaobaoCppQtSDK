#ifndef SIMBAINSIGHTCATSFORECASTGETREQUEST_H
#define SIMBAINSIGHTCATSFORECASTGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaInsightCatsforecastGetResponse.h>

/**
 * TOP API: 类目属性预测
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaInsightCatsforecastGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getNick() const
;  void setNick (QString nick);

 QString getWords() const
;  void setWords (QString words);


  virtual SimbaInsightCatsforecastGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 主人昵称
 **/
  QString nick;

/**
 * @brief 查询词数组，最大长度200
 **/
  QString words;

};

#endif  /* SIMBAINSIGHTCATSFORECASTGETREQUEST_H */
