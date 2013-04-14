#ifndef LOGISTICSPARTNERSGETREQUEST_H
#define LOGISTICSPARTNERSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/LogisticsPartnersGetResponse.h>

/**
 * TOP API: 查询物流公司信息（可以查询目的地可不可达情况）
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class LogisticsPartnersGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getGoodsValue() const
;  void setGoodsValue (QString goodsValue);

 bool getIsNeedCarriage() const
;  void setIsNeedCarriage (bool isNeedCarriage);

 QString getServiceType() const
;  void setServiceType (QString serviceType);

 QString getSourceId() const
;  void setSourceId (QString sourceId);

 QString getTargetId() const
;  void setTargetId (QString targetId);


  virtual LogisticsPartnersGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 货物价格.只有当选择货到付款此参数才会有效
 **/
  QString goodsValue;

/**
 * @brief 是否需要揽收资费信息，默认false。在此值为false时，返回内容中将无carriage。在未设置source_id或target_id的情况下，无法查询揽收资费信息。自己联系无揽收资费记录。
 **/
  bool isNeedCarriage;

/**
 * @brief 服务类型，根据此参数可查出提供相应服务类型的物流公司信息(物流公司状态正常)，可选值：cod(货到付款)、online(在线下单)、 offline(自己联系)、limit(限时物流)。然后再根据source_id,target_id,goods_value这三个条件来过滤物流公司. 目前输入自己联系服务类型将会返回空，因为自己联系并没有具体的服务信息，所以不会有记录。
 **/
  QString serviceType;

/**
 * @brief 物流公司揽货地地区码（必须是区、县一级的）.参考:http://www.stats.gov.cn/tjbz/xzqhdm/t20100623_402652267.htm  或者调用 taobao.areas.get 获取
 **/
  QString sourceId;

/**
 * @brief 物流公司派送地地区码（必须是区、县一级的）.参考:http://www.stats.gov.cn/tjbz/xzqhdm/t20100623_402652267.htm  或者调用 taobao.areas.get 获取
 **/
  QString targetId;

};

#endif  /* LOGISTICSPARTNERSGETREQUEST_H */
