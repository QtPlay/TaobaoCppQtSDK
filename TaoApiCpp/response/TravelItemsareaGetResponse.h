#ifndef TRAVELITEMSAREAGETRESPONSE_H
#define TRAVELITEMSAREAGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/TravelItemsAreaNode.h>


/**
 * @brief TOP RESPONSE API: 此接口用于获取卖家发布旅游度假线路商品时目的地地区级联信息。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TravelItemsareaGetResponse : public TaoResponse
{
public:
 virtual ~TravelItemsareaGetResponse() { }

  QList<TravelItemsAreaNode> getTravelItemsAreaNodes() const;
  void setTravelItemsAreaNodes (QList<TravelItemsAreaNode> travelItemsAreaNodes);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 旅游度假商品地区（目的地）级联结构。
 **/
  QList<TravelItemsAreaNode> travelItemsAreaNodes;

};

#endif
