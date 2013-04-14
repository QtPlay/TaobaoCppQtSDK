#ifndef WLBITEMGETRESPONSE_H
#define WLBITEMGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/WlbItem.h>


/**
 * @brief TOP RESPONSE API: 根据商品ID获取商品信息,除了获取商品信息外还可获取商品属性信息和库存信息。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbItemGetResponse : public TaoResponse
{
public:
 virtual ~WlbItemGetResponse() { }

  WlbItem getItem() const;
  void setItem (WlbItem item);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 商品信息
 **/
  WlbItem item;

};

#endif
