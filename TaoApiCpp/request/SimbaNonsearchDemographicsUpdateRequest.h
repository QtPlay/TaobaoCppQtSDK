#ifndef SIMBANONSEARCHDEMOGRAPHICSUPDATEREQUEST_H
#define SIMBANONSEARCHDEMOGRAPHICSUPDATEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaNonsearchDemographicsUpdateResponse.h>

/**
 * TOP API: 设置投放人群维度加价，如果给定的campagin没有设置给定的人群维度则添加给定的人群维度，如果给定的campaign已存在给定的人群维度则修改加价
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaNonsearchDemographicsUpdateRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getCampaignId() const
;  void setCampaignId (qlonglong campaignId);

 QString getDemographicIdPriceJson() const
;  void setDemographicIdPriceJson (QString demographicIdPriceJson);

 QString getNick() const
;  void setNick (QString nick);


  virtual SimbaNonsearchDemographicsUpdateResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 推广计划ID
 **/
  qlonglong campaignId;

/**
 * @brief 投放人群维度Id，加价json数组字符串。数组长度不能超过15，json数组中的key必须和相应实体DemographicSetting中的属性字段保持一致，否则对应的实体对象属性获取不到相应的值 
incrementalPrice是整数，以“分”为单位，不能小于1，不能大于日限额,不能大于9999分; 可以为0表示不加价；投放人群维度ID必须有效
 **/
  QString demographicIdPriceJson;

/**
 * @brief 主人昵称
 **/
  QString nick;

};

#endif  /* SIMBANONSEARCHDEMOGRAPHICSUPDATEREQUEST_H */
