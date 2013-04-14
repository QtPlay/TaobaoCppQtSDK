#ifndef HOTELIMAGEUPLOADREQUEST_H
#define HOTELIMAGEUPLOADREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/HotelImageUploadResponse.h>

/**
 * TOP API: 酒店图片上传
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class HotelImageUploadRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getHid() const
;  void setHid (qlonglong hid);

 FileItem getPic() const
;  void setPic (FileItem pic);


  virtual HotelImageUploadResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 酒店id
 **/
  qlonglong hid;

/**
 * @brief 上传的图片
 **/
  FileItem pic;

};

#endif  /* HOTELIMAGEUPLOADREQUEST_H */
