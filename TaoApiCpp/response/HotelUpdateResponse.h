#ifndef HOTELUPDATERESPONSE_H
#define HOTELUPDATERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Hotel.h>


/**
 * @brief TOP RESPONSE API: 此接口用于更新一个酒店的信息，根据用户传入的hid更新酒店数据。如果该酒店在淘宝集市酒店不存在，则会返回错误提示。 
该接口发出的是一个更新酒店信息的申请，需要淘宝小二审核。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class HotelUpdateResponse : public TaoResponse
{
public:
 virtual ~HotelUpdateResponse() { }

  Hotel getHotel() const;
  void setHotel (Hotel hotel);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 酒店结构
 **/
  Hotel hotel;

};

#endif
