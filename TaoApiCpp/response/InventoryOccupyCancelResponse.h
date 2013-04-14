#ifndef INVENTORYOCCUPYCANCELRESPONSE_H
#define INVENTORYOCCUPYCANCELRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 商家取消预留库存
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class InventoryOccupyCancelResponse : public TaoResponse
{
public:
 virtual ~InventoryOccupyCancelResponse() { }

  bool getIsSuccess() const;
  void setIsSuccess (bool isSuccess);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 是否成功
 **/
  bool isSuccess;

};

#endif
