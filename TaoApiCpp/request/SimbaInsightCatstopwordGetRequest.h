#ifndef SIMBAINSIGHTCATSTOPWORDGETREQUEST_H
#define SIMBAINSIGHTCATSTOPWORDGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaInsightCatstopwordGetResponse.h>

/**
 * TOP API: 类目TOP词查询
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaInsightCatstopwordGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getCategoryIds() const
;  void setCategoryIds (QString categoryIds);

 QString getNick() const
;  void setNick (QString nick);

 qlonglong getResultNum() const
;  void setResultNum (qlonglong resultNum);


  virtual SimbaInsightCatstopwordGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 类目id数组，最大长度200
 **/
  QString categoryIds;

/**
 * @brief 主人昵称
 **/
  QString nick;

/**
 * @brief 最大返回数量(1-100)
 **/
  qlonglong resultNum;

};

#endif  /* SIMBAINSIGHTCATSTOPWORDGETREQUEST_H */
