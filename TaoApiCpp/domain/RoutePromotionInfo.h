#ifndef ROUTEPROMOTIONINFO_H
#define ROUTEPROMOTIONINFO_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 线路的促销信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class RoutePromotionInfo : public TaoDomain
{

public:
 virtual ~RoutePromotionInfo() { }

  QString getBasePromotionId() const;
  void setBasePromotionId (QString basePromotionId);
  QString getPromotionDescription() const;
  void setPromotionDescription (QString promotionDescription);
  QString getPromotionUrl() const;
  void setPromotionUrl (QString promotionUrl);
  bool getUnbasePromotion() const;
  void setUnbasePromotion (bool unbasePromotion);
  
  virtual void parseResponse();

private:
/**
 * @brief 线路基本促销的id
 **/
  QString basePromotionId;

/**
 * @brief 促销的描述
 **/
  QString promotionDescription;

/**
 * @brief 具体活动详情页面链接
 **/
  QString promotionUrl;

/**
 * @brief 是否包含非基础促销
 **/
  bool unbasePromotion;

};

#endif  /* ROUTEPROMOTIONINFO_H */
