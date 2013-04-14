#ifndef ATORDER_H
#define ATORDER_H

#include <TaoApiCpp/TaoDomain.h>
#include <QList>
#include <QString>
#include <TaoApiCpp/domain/BaseInfo.h>
#include <TaoApiCpp/domain/CorpInfo.h>
#include <TaoApiCpp/domain/Itinerary.h>
#include <TaoApiCpp/domain/SegmentInfo.h>


/**
 * @brief 国内机票订单数据结构【top订单优化】
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class AtOrder : public TaoDomain
{

public:
 virtual ~AtOrder() { }

  BaseInfo getBaseInfo() const;
  void setBaseInfo (BaseInfo baseInfo);
  CorpInfo getCorpInfo() const;
  void setCorpInfo (CorpInfo corpInfo);
  QString getExtra() const;
  void setExtra (QString extra);
  Itinerary getItinerary() const;
  void setItinerary (Itinerary itinerary);
  QList<SegmentInfo> getSegmentInfos() const;
  void setSegmentInfos (QList<SegmentInfo> segmentInfos);
  
  virtual void parseResponse();

private:
/**
 * @brief 订单基础信息
 **/
  BaseInfo baseInfo;

/**
 * @brief 订单行政购票信息
 **/
  CorpInfo corpInfo;

/**
 * @brief 扩展字段
 **/
  QString extra;

/**
 * @brief 订单行程单信息
 **/
  Itinerary itinerary;

/**
 * @brief 订单航段信息
 **/
  QList<SegmentInfo> segmentInfos;

};

#endif  /* ATORDER_H */
