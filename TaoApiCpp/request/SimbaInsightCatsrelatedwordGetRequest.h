#ifndef SIMBAINSIGHTCATSRELATEDWORDGETREQUEST_H
#define SIMBAINSIGHTCATSRELATEDWORDGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaInsightCatsrelatedwordGetResponse.h>

/**
 * TOP API: 类目相关词查询
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaInsightCatsrelatedwordGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getNick() const
;  void setNick (QString nick);

 qlonglong getResultNum() const
;  void setResultNum (qlonglong resultNum);

 QString getWords() const
;  void setWords (QString words);


  virtual SimbaInsightCatsrelatedwordGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 主人昵称
 **/
  QString nick;

/**
 * @brief 最大返回数量(1-10)
 **/
  qlonglong resultNum;

/**
 * @brief 查询词数组，最大长度200
 **/
  QString words;

};

#endif  /* SIMBAINSIGHTCATSRELATEDWORDGETREQUEST_H */
