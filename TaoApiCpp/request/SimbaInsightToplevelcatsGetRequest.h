#ifndef SIMBAINSIGHTTOPLEVELCATSGETREQUEST_H
#define SIMBAINSIGHTTOPLEVELCATSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaInsightToplevelcatsGetResponse.h>

/**
 * TOP API: 获取一级类目
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaInsightToplevelcatsGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getNick() const
;  void setNick (QString nick);


  virtual SimbaInsightToplevelcatsGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 主人昵称
 **/
  QString nick;

};

#endif  /* SIMBAINSIGHTTOPLEVELCATSGETREQUEST_H */
