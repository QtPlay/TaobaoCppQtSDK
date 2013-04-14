#ifndef SIMBAADGROUPSITEMEXISTREQUEST_H
#define SIMBAADGROUPSITEMEXISTREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaAdgroupsItemExistResponse.h>

/**
 * TOP API: 判断在一个推广计划中是否已经推广了一个商品
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaAdgroupsItemExistRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getCampaignId() const
;  void setCampaignId (qlonglong campaignId);

 qlonglong getItemId() const
;  void setItemId (qlonglong itemId);

 QString getNick() const
;  void setNick (QString nick);


  virtual SimbaAdgroupsItemExistResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 推广计划Id
 **/
  qlonglong campaignId;

/**
 * @brief 商品Id
 **/
  qlonglong itemId;

/**
 * @brief 主人昵称
 **/
  QString nick;

};

#endif  /* SIMBAADGROUPSITEMEXISTREQUEST_H */
