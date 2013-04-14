#ifndef SIMBACAMPAIGNSGETREQUEST_H
#define SIMBACAMPAIGNSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaCampaignsGetResponse.h>

/**
 * TOP API: 取得一个客户的推广计划；
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaCampaignsGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getNick() const
;  void setNick (QString nick);


  virtual SimbaCampaignsGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 主人昵称
 **/
  QString nick;

};

#endif  /* SIMBACAMPAIGNSGETREQUEST_H */
