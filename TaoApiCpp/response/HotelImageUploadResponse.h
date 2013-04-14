#ifndef HOTELIMAGEUPLOADRESPONSE_H
#define HOTELIMAGEUPLOADRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/HotelImage.h>


/**
 * @brief TOP RESPONSE API: 酒店图片上传
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class HotelImageUploadResponse : public TaoResponse
{
public:
 virtual ~HotelImageUploadResponse() { }

  HotelImage getHotelImage() const;
  void setHotelImage (HotelImage hotelImage);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 酒店图片
 **/
  HotelImage hotelImage;

};

#endif
