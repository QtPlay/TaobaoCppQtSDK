#ifndef SIMBANONSEARCHALLPLACESGETRESPONSE_H
#define SIMBANONSEARCHALLPLACESGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/Place.h>


/**
 * @brief TOP RESPONSE API: 获取单独出价投放位置列表
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaNonsearchAllplacesGetResponse : public TaoResponse
{
public:
 virtual ~SimbaNonsearchAllplacesGetResponse() { }

  QList<Place> getPlaceList() const;
  void setPlaceList (QList<Place> placeList);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 定向推广投放位置列表
 **/
  QList<Place> placeList;

};

#endif
