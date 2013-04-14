#ifndef SIMBACAMPAIGNADDREQUEST_H
#define SIMBACAMPAIGNADDREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaCampaignAddResponse.h>

/**
 * TOP API: 创建一个推广计划
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaCampaignAddRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getNick() const
;  void setNick (QString nick);

 QString getTitle() const
;  void setTitle (QString title);


  virtual SimbaCampaignAddResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 主人昵称
 **/
  QString nick;

/**
 * @brief 推广计划名称，不能多余20个汉字，不能和客户其他推广计划同名。
 **/
  QString title;

};

#endif  /* SIMBACAMPAIGNADDREQUEST_H */
