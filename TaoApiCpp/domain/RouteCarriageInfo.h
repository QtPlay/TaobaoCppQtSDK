#ifndef ROUTECARRIAGEINFO_H
#define ROUTECARRIAGEINFO_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 线路运输相关的基本信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class RouteCarriageInfo : public TaoDomain
{

public:
 virtual ~RouteCarriageInfo() { }

  QString getAddFee() const;
  void setAddFee (QString addFee);
  QString getComments() const;
  void setComments (QString comments);
  QString getGiveTime() const;
  void setGiveTime (QString giveTime);
  QString getInitialFee() const;
  void setInitialFee (QString initialFee);
  QString getLeastExpense() const;
  void setLeastExpense (QString leastExpense);
  QString getOrigVolumeRate() const;
  void setOrigVolumeRate (QString origVolumeRate);
  QString getOrigWeightRate() const;
  void setOrigWeightRate (QString origWeightRate);
  QString getPriceDescription() const;
  void setPriceDescription (QString priceDescription);
  QString getTakeTime() const;
  void setTakeTime (QString takeTime);
  QString getTransportMode() const;
  void setTransportMode (QString transportMode);
  QString getTransportName() const;
  void setTransportName (QString transportName);
  QString getTransportTime() const;
  void setTransportTime (QString transportTime);
  qlonglong getTransportTimeHours() const;
  void setTransportTimeHours (qlonglong transportTimeHours);
  QString getTransportTypeCode() const;
  void setTransportTypeCode (QString transportTypeCode);
  QString getTransportWay() const;
  void setTransportWay (QString transportWay);
  QString getVolumeRate() const;
  void setVolumeRate (QString volumeRate);
  QString getWeightRate() const;
  void setWeightRate (QString weightRate);
  
  virtual void parseResponse();

private:
/**
 * @brief 续重
 **/
  QString addFee;

/**
 * @brief 线路的备注
 **/
  QString comments;

/**
 * @brief 送货时效
 **/
  QString giveTime;

/**
 * @brief 首重
 **/
  QString initialFee;

/**
 * @brief 保底消费
 **/
  QString leastExpense;

/**
 * @brief 轻货原价（按体积计费）
 **/
  QString origVolumeRate;

/**
 * @brief 重物原价
 **/
  QString origWeightRate;

/**
 * @brief 价格描述
 **/
  QString priceDescription;

/**
 * @brief 提货时间
 **/
  QString takeTime;

/**
 * @brief 运价模式。D2D:门到门；S2S：站到站；D2S：门到站；S2D：站到门。
 **/
  QString transportMode;

/**
 * @brief 运输方式名称
 **/
  QString transportName;

/**
 * @brief 运输时效的文字描述
 **/
  QString transportTime;

/**
 * @brief 运输时效的小时数。可用于排序。
 **/
  qlonglong transportTimeHours;

/**
 * @brief 运输方式code标识
 **/
  QString transportTypeCode;

/**
 * @brief 运输方式。QC：汽运；HK:航空。
 **/
  QString transportWay;

/**
 * @brief 轻货价格（按体积计费）
 **/
  QString volumeRate;

/**
 * @brief 重物价格
 **/
  QString weightRate;

};

#endif  /* ROUTECARRIAGEINFO_H */
