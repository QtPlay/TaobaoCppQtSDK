#ifndef SIMBAINSIGHTCATSGETREQUEST_H
#define SIMBAINSIGHTCATSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaInsightCatsGetResponse.h>

/**
 * TOP API: 获取类目信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaInsightCatsGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getCategoryIds() const
;  void setCategoryIds (QString categoryIds);

 QString getNick() const
;  void setNick (QString nick);


  virtual SimbaInsightCatsGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 查询类目id数组，最大长度200
 **/
  QString categoryIds;

/**
 * @brief 主人昵称
 **/
  QString nick;

};

#endif  /* SIMBAINSIGHTCATSGETREQUEST_H */
