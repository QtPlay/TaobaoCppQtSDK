#ifndef SIMBANONSEARCHADGROUPPLACESDELETEREQUEST_H
#define SIMBANONSEARCHADGROUPPLACESDELETEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaNonsearchAdgroupplacesDeleteResponse.h>

/**
 * TOP API: 批量删除推广组定向推广投放位置
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaNonsearchAdgroupplacesDeleteRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getAdgroupPlacesJson() const
;  void setAdgroupPlacesJson (QString adgroupPlacesJson);

 qlonglong getCampaignId() const
;  void setCampaignId (qlonglong campaignId);

 QString getNick() const
;  void setNick (QString nick);


  virtual SimbaNonsearchAdgroupplacesDeleteResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 推广组id，投放位置id  json数组字符串，数组个数最多200个。其中json数组中的key必须和对应实体AdGroupPlace中的属性字段保持一致，否则对应的实体对象属性获取不到相应的值
 **/
  QString adgroupPlacesJson;

/**
 * @brief 推广计划ID
 **/
  qlonglong campaignId;

/**
 * @brief 主人昵称
 **/
  QString nick;

};

#endif  /* SIMBANONSEARCHADGROUPPLACESDELETEREQUEST_H */
